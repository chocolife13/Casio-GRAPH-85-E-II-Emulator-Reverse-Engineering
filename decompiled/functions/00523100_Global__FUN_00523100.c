// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00523100
// entry: 00523100  size: 405


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00523100(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  undefined1 local_10 [16];
  
  local_1c = 0;
  local_14 = FUN_00526410();
  FUN_00526420(0xe7);
  _DAT_005d0274 = 0;
  DAT_005d0270 = local_1c;
  puVar2 = &DAT_005d0270;
  puVar8 = &DAT_005d0278;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar8 = puVar8 + 1;
  }
  FUN_00538860(0x62,&DAT_005d0270);
  FUN_005387f0(0x62);
  FUN_005234d0(local_10);
  FUN_00523740();
  local_1c = FUN_0040ad00();
  FUN_00414620(1);
  iVar4 = 0;
  if (DAT_00596830 != 0xffff) {
    puVar2 = &DAT_00596830;
    do {
      piVar1 = puVar2 + 3;
      puVar2 = puVar2 + 3;
      iVar4 = iVar4 + 1;
    } while (*piVar1 != 0xffff);
  }
  iVar5 = iVar4 + -1;
  FUN_005262e0(0x84);
  iVar6 = 0;
  iVar9 = 0;
  do {
    while( true ) {
      FUN_00538b30();
      FUN_00522f70(iVar9,iVar6,&DAT_00596830);
      iVar3 = FUN_00526620(&local_20);
      if (iVar3 == 0) break;
      iVar3 = FUN_00523090(local_20,&DAT_00596830);
      if (-1 < iVar3) {
        iVar6 = iVar3;
        iVar9 = iVar3;
      }
    }
    switch(local_20) {
    case 0x7532:
    case 0x753f:
    case 0x754d:
      uVar7 = 0;
LAB_0052325a:
      FUN_00538810();
      FUN_00414630(1);
      FUN_005262e0(local_1c);
      FUN_00526440();
      FUN_00526420(local_14);
      FUN_00523630(local_10);
      return uVar7;
    case 0x7534:
      uVar7 = (&DAT_00596830)[iVar6 * 3];
      goto LAB_0052325a;
    case 0x7542:
      if (iVar6 == iVar9) {
        if (iVar9 < 1) {
          iVar9 = iVar4 + -6;
          iVar6 = iVar5;
          break;
        }
        iVar9 = iVar9 + -1;
      }
      iVar6 = iVar6 + -1;
      break;
    case 0x7547:
      if (iVar6 == iVar9 + 5) {
        if (iVar6 < iVar5) {
          iVar9 = iVar9 + 1;
          iVar6 = iVar6 + 1;
        }
        else {
          iVar9 = 0;
          iVar6 = 0;
        }
      }
      else if (iVar6 < iVar5) {
        iVar6 = iVar6 + 1;
      }
      else {
        iVar9 = 0;
        iVar6 = 0;
      }
    }
  } while( true );
}

