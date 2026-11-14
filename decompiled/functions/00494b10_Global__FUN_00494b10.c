// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00494b10
// entry: 00494b10  size: 494


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00494b10(void)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  uint local_28 [2];
  undefined2 local_20;
  undefined4 local_1e;
  
  uVar1 = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,0,local_34);
  _DAT_005cfd20 = DAT_005845b8;
  _DAT_005cfd24 = DAT_005845bc;
  _DAT_005cfd28 = DAT_005845c0;
  _DAT_005cfd2c = DAT_005845c4;
  FUN_00538860(0,&DAT_005cfd20);
  FUN_005387f0(0);
  local_1e = 0x10002;
switchD_00494c60_caseD_7546:
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          FUN_00494ed0(local_1e);
          FUN_00538b30();
          iVar2 = FUN_00526620(local_28);
          if (iVar2 == 0) break;
          if ((local_28[0] != 0x2c) && (local_28[0] != 0xe)) {
            local_20 = 1;
            FUN_00494d30(local_2c);
          }
        }
        if (local_28[0] < 0x7543) break;
        switch(local_28[0]) {
        case 0x7545:
          local_20 = 0;
          FUN_00494d30(local_2c);
          break;
        case 0x7547:
          if ((ushort)local_1e < 4) {
            local_1e = CONCAT22(local_1e._2_2_,(ushort)local_1e + 1);
          }
          break;
        case 0x754d:
          goto switchD_00494c60_caseD_754d;
        case 0x7555:
          FUN_0052d2d0(s__FINANCE_005be230,local_30);
        }
      }
      if (local_28[0] != 0x7542) break;
      if (2 < (ushort)local_1e) {
        local_1e = CONCAT22(local_1e._2_2_,(ushort)local_1e - 1);
      }
    }
    if (local_28[0] < 0x7532) {
      if (local_28[0] == 0x7531) {
        local_28[0] = FUN_00526040();
        local_20 = 1;
        FUN_00494d30(local_2c);
        goto switchD_00494c60_caseD_7546;
      }
      if (local_28[0] == 1) {
        FUN_004951d0(local_2c);
        uVar4 = 0xb;
      }
      else {
        if (local_28[0] != 2) goto switchD_00494c60_caseD_7546;
        FUN_004951d0(local_2c);
        uVar4 = 0xc;
      }
      FUN_004951f0(local_2c,uVar4);
      bVar3 = local_28[0] == 0x754d;
    }
    else {
      bVar3 = local_28[0] == 0x7532;
    }
    if (bVar3) {
switchD_00494c60_caseD_754d:
      FUN_00538810();
      FUN_005389c0(0,0,local_34);
      FUN_00526440();
      FUN_00526420(uVar1);
      return;
    }
  } while( true );
}

