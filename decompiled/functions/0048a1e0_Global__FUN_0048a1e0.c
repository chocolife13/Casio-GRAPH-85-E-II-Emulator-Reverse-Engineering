// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048a1e0
// entry: 0048a1e0  size: 664


int FUN_0048a1e0(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined1 local_30 [4];
  int local_2c;
  uint local_28 [2];
  undefined2 local_20;
  ushort local_1e;
  ushort local_1c;
  
  iVar3 = 0;
  local_34 = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,0,local_38);
  puVar4 = &DAT_00583808;
  puVar5 = &DAT_005cf810;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_00538860(0,&DAT_005cf810);
  FUN_005387f0(0);
  bVar1 = true;
  local_1e = 2;
  local_1c = 1;
LAB_0048a242:
  do {
    FUN_0048a870(&local_2c);
    FUN_00538b30();
    iVar2 = FUN_00526620(local_28);
    if (iVar2 == 0) {
      if (local_28[0] < 0x7532) {
        if (local_28[0] == 0x7531) {
          local_28[0] = FUN_00526040();
          local_20 = 1;
          goto LAB_0048a3f8;
        }
        switch(local_28[0]) {
        case 1:
          FUN_004951d0(&local_2c);
          local_2c = 0x2b;
          break;
        case 2:
          FUN_004951d0(&local_2c);
          local_2c = 0x2a;
          break;
        case 3:
          FUN_004951d0(&local_2c);
          local_2c = 0x29;
          break;
        case 4:
          FUN_004951d0(&local_2c);
          local_2c = 0x2d;
          break;
        case 5:
          FUN_004951d0(&local_2c);
          local_2c = 0x2c;
          break;
        case 6:
          iVar3 = 0x14;
          goto LAB_0048a44a;
        default:
          goto switchD_0048a285_default;
        }
        iVar3 = FUN_0048ac00(&local_2c);
        if (local_28[0] == 0x754d) goto switchD_0048a34f_caseD_7532;
      }
      else {
        switch(local_28[0]) {
        case 0x7532:
        case 0x754d:
switchD_0048a34f_caseD_7532:
          bVar1 = false;
          break;
        case 0x7542:
          if ((local_1e != 0) && (local_1e = local_1e - 1, local_1e == 1)) {
            if (1 < local_1c) {
              local_1c = local_1c - 1;
            }
            local_1e = 2;
          }
          break;
        case 0x7545:
          local_20 = 0;
          goto LAB_0048a3f8;
        case 0x7547:
          if ((local_1e < 9) && (local_1e = local_1e + 1, local_1e == 8)) {
            if (local_1c < 4) {
              local_1c = local_1c + 1;
            }
            local_1e = 7;
          }
          break;
        case 0x7555:
          FUN_0052d2d0(s__FINANCE_005be230,local_30);
        }
      }
    }
    else {
      if ((local_28[0] == 0x2c) || (local_28[0] == 0xe)) goto LAB_0048a242;
      local_20 = 1;
LAB_0048a3f8:
      FUN_0048a4d0(&local_2c);
    }
switchD_0048a285_default:
    if (iVar3 == 0x2e) {
      FUN_004951d0(&local_2c);
      local_2c = iVar3;
      iVar3 = FUN_00492e20(&local_2c);
      if (iVar3 != 0) {
        FUN_00495540(&local_2c,iVar3);
      }
      if (local_28[0] == 0x754d) goto LAB_0048a44a;
    }
    if (!bVar1) {
LAB_0048a44a:
      FUN_00538810();
      FUN_005389c0(0,0,local_38);
      FUN_00526440();
      FUN_00526420(local_34);
      return iVar3;
    }
  } while( true );
}

