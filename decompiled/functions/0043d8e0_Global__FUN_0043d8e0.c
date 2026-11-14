// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043d8e0
// entry: 0043d8e0  size: 532


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0043d8e0(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int local_10;
  uint local_c;
  undefined1 local_8 [4];
  undefined4 local_4;
  
  local_4 = FUN_00526410();
  FUN_00526440();
  FUN_00526420(199);
  FUN_0053c690(2);
  FUN_00538980(0,0,local_8);
  DAT_005ce2d0 = DAT_0057f420;
  puVar3 = &DAT_005ce2d0;
  puVar5 = &DAT_005ce2d8;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  local_10 = 6;
  _DAT_005ce2d4 = DAT_0057f424;
  FUN_00538860(0,&DAT_005ce2d0);
  FUN_005387f0(0);
  iVar6 = 1;
  iVar2 = -1;
LAB_0043d97c:
  while( true ) {
    do {
      local_10 = 1;
      do {
        FUN_005232d0(1,local_10);
        if (iVar2 + 1 + local_10 == iVar6) {
          FUN_00523490(*(undefined4 *)(param_1 + (local_10 + iVar2) * 4));
        }
        else {
          FUN_00523470(*(undefined4 *)(param_1 + (iVar2 + local_10) * 4),0x15);
        }
        local_10 = local_10 + 1;
      } while (local_10 < 8);
      FUN_00538b30();
      iVar1 = FUN_00526620(&local_c);
    } while (iVar1 != 0);
    if (0x7547 < local_c) break;
    if (local_c == 0x7547) {
      if ((iVar6 < param_2) && (iVar6 = iVar6 + 1, 6 < (iVar6 - iVar2) + -2)) {
        iVar2 = iVar2 + 1;
      }
    }
    else if (local_c < 0x7535) {
      if ((local_c == 0x7534) || (local_c == 1)) {
        uVar4 = 0;
        *param_3 = iVar6;
        goto LAB_0043dac6;
      }
      if (local_c == 0x7532) {
        uVar4 = 0xfffffffe;
LAB_0043dac6:
        FUN_00538810();
        FUN_005389c0(0,0,local_8);
        FUN_00526440();
        FUN_00526420(local_4);
        return uVar4;
      }
    }
    else if ((local_c == 0x7542) && (1 < iVar6)) {
      iVar6 = iVar6 + -1;
    }
  }
  if (local_c != 0x754d) {
    if (local_c != 0x754e) {
      if ((local_c == 0x7555) && (FUN_0052d2d0(&DAT_005be2a4,&local_10), local_10 == 1)) {
        *param_4 = 0;
        FUN_0043f120();
      }
      goto LAB_0043d97c;
    }
    iVar1 = FUN_0052eb10(0);
    if (iVar1 != 0) goto LAB_0043d97c;
    *param_4 = 0;
    FUN_0043f120();
  }
  uVar4 = 0xffffffff;
  goto LAB_0043dac6;
}

