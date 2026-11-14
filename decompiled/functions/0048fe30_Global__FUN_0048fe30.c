// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048fe30
// entry: 0048fe30  size: 513


void FUN_0048fe30(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_130 [4];
  uint local_12c [2];
  undefined2 local_124;
  undefined4 local_122;
  undefined1 local_104 [4];
  undefined1 local_100 [4];
  undefined1 local_fc [252];
  
  uVar1 = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,0,local_104);
  puVar3 = &DAT_00584300;
  puVar4 = &DAT_005cfb40;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_00538860(0,&DAT_005cfb40);
  FUN_005387f0(0);
  local_122 = 0x10002;
switchD_0048ff9d_caseD_7546:
  do {
    while( true ) {
      FUN_004902f0(local_122);
      FUN_00538b30();
      iVar2 = FUN_00526620(local_12c);
      if (iVar2 == 0) break;
      if ((local_12c[0] != 0x2c) && (local_12c[0] != 0xe)) {
LAB_0048ff55:
        local_124 = 1;
        FUN_00490060(local_130,local_fc);
      }
    }
    if (local_12c[0] < 0x7543) {
      if (local_12c[0] != 0x7542) {
        if (3 < local_12c[0]) {
          if (local_12c[0] == 0x7531) {
            local_12c[0] = FUN_00526040();
            goto LAB_0048ff55;
          }
          if (local_12c[0] == 0x7532) goto switchD_0048ff9d_caseD_754d;
          goto switchD_0048ff9d_caseD_7546;
        }
        if (local_12c[0] == 3) {
          FUN_004951d0(local_130);
LAB_0048feea:
          FUN_00490bd0(local_130);
        }
        else {
          if (local_12c[0] != 1) {
            if (local_12c[0] == 2) {
              FUN_004951d0(local_130);
              goto LAB_0048feea;
            }
            goto switchD_0048ff9d_caseD_7546;
          }
          FUN_004951d0(local_130);
          FUN_00490e00(local_130);
        }
        if (local_12c[0] == 0x754d) goto switchD_0048ff9d_caseD_754d;
        goto switchD_0048ff9d_caseD_7546;
      }
      if (2 < (ushort)local_122) {
        local_122 = CONCAT22(local_122._2_2_,(ushort)local_122 - 1);
      }
      goto switchD_0048ff9d_caseD_7546;
    }
    switch(local_12c[0]) {
    case 0x7545:
      local_124 = 0;
      FUN_00490060(local_130,local_fc);
      break;
    case 0x7547:
      if ((ushort)local_122 < 4) {
        local_122 = CONCAT22(local_122._2_2_,(ushort)local_122 + 1);
      }
      break;
    case 0x754d:
switchD_0048ff9d_caseD_754d:
      FUN_00538810();
      FUN_005389c0(0,0,local_104);
      FUN_00526440();
      FUN_00526420(uVar1);
      return;
    case 0x7555:
      FUN_0052d2d0(s__FINANCE_005be230,local_100);
    }
  } while( true );
}

