// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048f070
// entry: 0048f070  size: 522


void FUN_0048f070(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined1 local_30 [4];
  undefined4 local_2c;
  uint local_28 [2];
  undefined2 local_20;
  undefined4 local_1e;
  
  local_34 = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,0,local_38);
  puVar2 = &DAT_00584208;
  puVar3 = &DAT_005cfa80;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00538860(0,&DAT_005cfa80);
  FUN_005387f0(0);
  local_1e = 0x10002;
switchD_0048f1d7_caseD_7546:
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            FUN_0048f480(local_1e);
            FUN_00538b30();
            iVar1 = FUN_00526620(local_28);
            if (iVar1 == 0) break;
            if ((local_28[0] != 0x2c) && (local_28[0] != 0xe)) {
              local_20 = 1;
              FUN_0048f2b0(&local_2c);
            }
          }
          if (local_28[0] < 0x7543) break;
          switch(local_28[0]) {
          case 0x7545:
            local_20 = 0;
            FUN_0048f2b0(&local_2c);
            break;
          case 0x7547:
            if ((ushort)local_1e < 4) {
              local_1e = CONCAT22(local_1e._2_2_,(ushort)local_1e + 1);
            }
            break;
          case 0x754d:
            goto switchD_0048f1d7_caseD_754d;
          case 0x7555:
            FUN_0052d2d0(s__FINANCE_005be230,local_30);
          }
        }
        if (local_28[0] != 0x7542) break;
        if (2 < (ushort)local_1e) {
          local_1e = CONCAT22(local_1e._2_2_,(ushort)local_1e - 1);
        }
      }
      if (local_28[0] < 4) break;
      if (local_28[0] == 0x7531) {
        local_28[0] = FUN_00526040();
        local_20 = 1;
        FUN_0048f2b0(&local_2c);
      }
      else if (local_28[0] == 0x7532) goto switchD_0048f1d7_caseD_754d;
    }
    if (local_28[0] == 3) {
      FUN_004951d0(&local_2c);
      local_2c = 0x3f;
    }
    else if (local_28[0] == 1) {
      FUN_004951d0(&local_2c);
      local_2c = 0x3d;
    }
    else {
      if (local_28[0] != 2) goto switchD_0048f1d7_caseD_7546;
      FUN_004951d0(&local_2c);
      local_2c = 0x3e;
    }
    FUN_0048f660(&local_2c);
    if (local_28[0] == 0x754d) {
switchD_0048f1d7_caseD_754d:
      FUN_00538810();
      FUN_005389c0(0,0,local_38);
      FUN_00526440();
      FUN_00526420(local_34);
      return;
    }
  } while( true );
}

