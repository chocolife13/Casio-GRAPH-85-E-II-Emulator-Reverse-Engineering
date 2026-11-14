// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004914e0
// entry: 004914e0  size: 661


void FUN_004914e0(undefined4 *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint local_7c;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [12];
  undefined1 local_64 [48];
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  
  FUN_00526410();
  FUN_00526420(199);
  FUN_00538a00(local_70);
  FUN_0053c690(2);
  FUN_00538980(0,0,local_78);
  puVar4 = &DAT_00584430;
  puVar5 = &DAT_005cfbd0;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_00538860(0,&DAT_005cfbd0);
  FUN_005383a0(0);
  local_34 = 0x46;
  local_32 = 0x3a;
  local_31 = 0;
  FUN_005232d0(1,1);
  uVar2 = FUN_0052f6f0(0x11d,local_64,0x15);
  FUN_00523470(uVar2);
  FUN_005232d0(1,2);
  uVar2 = FUN_0052f6f0(0x124,local_64,0x15);
  FUN_00523470(uVar2);
  FUN_005232d0(1,2);
  local_33 = 0x31;
  FUN_005233e0(&local_34);
  FUN_005232d0(1,3);
  uVar2 = FUN_0052f6f0(0x125,local_64,0x15);
  FUN_00523470(uVar2);
  FUN_005232d0(1,3);
  local_33 = 0x32;
  FUN_005233e0(&local_34);
  iVar3 = 4;
  do {
    FUN_005232d0(1,iVar3);
    FUN_00523470(&DAT_005843fc,0x15);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 7);
  FUN_005232d0(1,4);
  FUN_005232d0(1,5);
  FUN_005232d0(1,6);
  FUN_005232d0(1,7);
  uVar2 = FUN_0052f6f0(0x123,local_64,0x15);
  FUN_00523470(uVar2);
  FUN_005232d0(1,7);
  local_33 = 0x36;
  FUN_005233e0(&local_34);
  bVar1 = true;
LAB_00491675:
  do {
    do {
      FUN_00538b30();
      iVar3 = FUN_00526620(&local_7c);
    } while (iVar3 != 0);
    if (((local_7c == 0) || (5 < local_7c)) || (iVar3 = FUN_00491780(), iVar3 != 4)) {
      if (local_7c < 7) {
        if (local_7c == 6) {
          *param_1 = 1;
          FUN_005385c0();
          FUN_005385b0();
          return;
        }
        if (local_7c == 1) {
          FUN_0048f070();
          FUN_005385c0();
          FUN_005385b0();
          return;
        }
        if (local_7c == 2) {
          FUN_0048fe30();
          FUN_005385c0();
          FUN_005385b0();
          return;
        }
        goto LAB_00491675;
      }
    }
    else {
      FUN_0052b240(4);
      local_7c = 0x7532;
      bVar1 = false;
    }
    if (local_7c == 0x754e) {
      iVar3 = FUN_0052eb10(0);
      if (iVar3 == 0) {
        FUN_00515dd0();
      }
      goto LAB_00491764;
    }
    if (local_7c == 0x7555) {
      FUN_0052d2d0(s__FINANCE_005be230,local_74);
      FUN_005385c0();
      FUN_005385b0();
      return;
    }
    if (!bVar1) {
LAB_00491764:
      FUN_005385c0();
      FUN_005385b0();
      return;
    }
  } while( true );
}

