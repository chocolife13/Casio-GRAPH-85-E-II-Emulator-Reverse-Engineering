// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00491240
// entry: 00491240  size: 572


void FUN_00491240(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint local_c8;
  undefined1 local_c4;
  char local_c3;
  undefined4 local_c0 [6];
  undefined1 local_a8 [4];
  undefined1 local_a4 [4];
  undefined1 local_a0;
  undefined1 local_9f;
  undefined1 local_9e;
  undefined1 local_9d;
  undefined1 local_6c [12];
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  local_c0[0] = 0x11e;
  local_c0[1] = 0x11f;
  local_c0[2] = 0x120;
  local_c0[3] = 0x121;
  local_c0[4] = 0x122;
  local_c0[5] = 0x123;
  FUN_00526410();
  FUN_00526420(199);
  FUN_00538a00(local_6c);
  FUN_0053c690(2);
  FUN_00538980(0,0,local_a8);
  puVar3 = &DAT_00584400;
  puVar4 = &DAT_005cfba0;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_00538860(0,&DAT_005cfba0);
  FUN_005383a0(0);
  local_a0 = 0x46;
  local_9f = 0x20;
  local_9e = 0x3a;
  local_9d = 0;
  FUN_005232d0(1,1);
  uVar1 = FUN_0052f6f0(0x11c,local_30,0x15);
  FUN_00523470(uVar1);
  iVar2 = 0;
  FUN_004b6ef0(&local_c4,&local_a0);
  puVar3 = local_c0;
  do {
    FUN_005232d0(1,iVar2 + 2);
    local_c3 = (char)iVar2 + '1';
    FUN_005233e0(&local_c4);
    FUN_005232d0(1,iVar2 + 2);
    uVar1 = FUN_0052f6f0(*puVar3,local_60,0x15);
    FUN_00523470(uVar1);
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar2 < 6);
switchD_004913cd_default:
  do {
    do {
      FUN_00538b30();
      iVar2 = FUN_00526620(&local_c8);
    } while (iVar2 != 0);
    if (((local_c8 != 0) && (local_c8 < 6)) && (iVar2 = FUN_00491780(), iVar2 == 4)) {
      FUN_0052b240(4);
      local_c8 = 0x7532;
    }
    while (local_c8 < 0x754f) {
      if (local_c8 == 0x754e) {
        iVar2 = FUN_0052eb10(0);
        if (iVar2 == 0) {
          FUN_00515dd0();
          FUN_005385c0();
          FUN_005385b0();
          return;
        }
        goto LAB_004914ad;
      }
      switch(local_c8) {
      case 1:
        FUN_00494b10();
        FUN_005385c0();
        FUN_005385b0();
        return;
      case 2:
        iVar2 = FUN_0048d3f0();
        if (iVar2 != 0x28) goto LAB_004914ad;
        local_c8 = 4;
        break;
      case 3:
        FUN_0048b4e0();
        FUN_005385c0();
        FUN_005385b0();
        return;
      case 4:
        iVar2 = FUN_0048a1e0();
        if (iVar2 != 0x14) goto LAB_004914ad;
        local_c8 = 2;
        break;
      case 5:
        FUN_0048e6e0();
        FUN_005385c0();
        FUN_005385b0();
        return;
      case 6:
        *param_1 = 2;
        FUN_005385c0();
        FUN_005385b0();
        return;
      default:
        goto switchD_004913cd_default;
      }
    }
  } while (local_c8 != 0x7555);
  FUN_0052d2d0(s__FINANCE_005be230,local_a4);
LAB_004914ad:
  FUN_005385c0();
  FUN_005385b0();
  return;
}

