// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048b4e0
// entry: 0048b4e0  size: 602


void FUN_0048b4e0(void)

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
  puVar2 = &DAT_00583ea8;
  puVar3 = &DAT_005cf900;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00538860(0,&DAT_005cf900);
  FUN_005387f0(0);
  local_1e = 0x10002;
switchD_0048b588_default:
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          FUN_0048b950(local_1e);
          FUN_00538b30();
          iVar1 = FUN_00526620(local_28);
          if (iVar1 == 0) break;
          if (((local_28[0] != 0x2c) && (local_28[0] != 0xe)) && ((ushort)local_1e == 2)) {
            local_20 = 1;
            FUN_0048b790(&local_2c);
          }
        }
        if (local_28[0] < 0x7532) break;
        switch(local_28[0]) {
        case 0x7532:
        case 0x754d:
          goto switchD_0048b66c_caseD_7532;
        case 0x7542:
          if (2 < (ushort)local_1e) {
            local_1e = CONCAT22(local_1e._2_2_,(ushort)local_1e - 1);
          }
          break;
        case 0x7545:
          if ((ushort)local_1e == 2) {
            local_20 = 0;
            FUN_0048b790(&local_2c);
          }
          break;
        case 0x7547:
          if ((ushort)local_1e < 3) {
            local_1e = CONCAT22(local_1e._2_2_,(ushort)local_1e + 1);
          }
          break;
        case 0x7555:
          FUN_0052d2d0(s__FINANCE_005be230,local_30);
        }
      }
      if (local_28[0] != 0x7531) break;
      if ((ushort)local_1e == 2) {
        local_28[0] = FUN_00526040();
        local_20 = 1;
        FUN_0048b790(&local_2c);
      }
    }
    switch(local_28[0]) {
    case 1:
      FUN_004951d0(&local_2c);
      local_2c = 0x1f;
      break;
    case 2:
      FUN_004951d0(&local_2c);
      local_2c = 0x20;
      break;
    case 3:
      FUN_004951d0(&local_2c);
      local_2c = 0x21;
      break;
    case 4:
      FUN_004951d0(&local_2c);
      local_2c = 0x22;
      break;
    case 5:
      FUN_00475a80();
      goto switchD_0048b588_default;
    case 6:
      if ((ushort)local_1e == 3) {
        FUN_0048b790(&local_2c);
      }
    default:
      goto switchD_0048b588_default;
    }
    FUN_0048bac0(&local_2c);
    if (local_28[0] == 0x754d) {
switchD_0048b66c_caseD_7532:
      FUN_00538810();
      FUN_005389c0(0,0,local_38);
      FUN_00526440();
      FUN_00526420(local_34);
      return;
    }
  } while( true );
}

