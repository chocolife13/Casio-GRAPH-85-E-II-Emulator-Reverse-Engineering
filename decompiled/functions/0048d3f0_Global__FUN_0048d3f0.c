// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048d3f0
// entry: 0048d3f0  size: 617


undefined4 FUN_0048d3f0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined1 local_30 [4];
  undefined4 local_2c;
  uint local_28 [2];
  undefined2 local_20;
  ushort local_1e;
  undefined2 local_1c;
  
  uVar2 = 0;
  local_34 = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,0,local_38);
  puVar3 = &DAT_00583fe0;
  puVar4 = &DAT_005cf930;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_00538860(0,&DAT_005cf930);
  FUN_005387f0(0);
  local_2c = 0x14;
  local_1e = 2;
  local_1c = 1;
switchD_0048d499_default:
  while( true ) {
    while( true ) {
      while( true ) {
        FUN_0048da60(&local_2c);
        FUN_00538b30();
        iVar1 = FUN_00526620(local_28);
        if (iVar1 == 0) break;
        if ((local_28[0] != 0x2c) && (local_28[0] != 0xe)) {
          local_20 = 1;
          FUN_0048d6b0(&local_2c);
        }
      }
      if (local_28[0] < 0x7532) break;
      switch(local_28[0]) {
      case 0x7532:
      case 0x754d:
        goto switchD_0048d564_caseD_7532;
      case 0x7542:
        if ((local_1e != 0) && (local_1e = local_1e - 1, local_1e == 1)) {
          local_1c = 1;
          local_1e = 2;
        }
        break;
      case 0x7545:
        local_20 = 0;
        FUN_0048d6b0(&local_2c);
        break;
      case 0x7547:
        if ((local_1e < 9) && (local_1e = local_1e + 1, local_1e == 8)) {
          local_1c = 2;
          local_1e = 7;
        }
        break;
      case 0x7555:
        FUN_0052d2d0(s__FINANCE_005be230,local_30);
      }
    }
    if (local_28[0] != 0x7531) break;
    local_28[0] = FUN_00526040();
    local_20 = 1;
    FUN_0048d6b0(&local_2c);
  }
  switch(local_28[0]) {
  case 1:
    FUN_004951d0(&local_2c);
    local_2c = 0x15;
    break;
  case 2:
    FUN_004951d0(&local_2c);
    local_2c = 0x16;
    break;
  case 3:
    FUN_004951d0(&local_2c);
    local_2c = 0x17;
    break;
  case 4:
    FUN_004951d0(&local_2c);
    local_2c = 0x18;
    break;
  case 5:
    FUN_004951d0(&local_2c);
    local_2c = 0x19;
    break;
  case 6:
    goto switchD_0048d499_caseD_6;
  default:
    goto switchD_0048d499_default;
  }
  uVar2 = FUN_0048e0e0(&local_2c);
  if (local_28[0] == 0x754d) goto switchD_0048d564_caseD_7532;
  goto switchD_0048d499_default;
switchD_0048d499_caseD_6:
  uVar2 = 0x28;
switchD_0048d564_caseD_7532:
  FUN_00538810();
  FUN_005389c0(0,0,local_38);
  FUN_00526440();
  FUN_00526420(local_34);
  return uVar2;
}

