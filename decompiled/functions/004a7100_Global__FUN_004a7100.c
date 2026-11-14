// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a7100
// entry: 004a7100  size: 385


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004a7100(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint local_24;
  undefined1 local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_18 = FUN_004a7300(&local_c);
  local_14 = FUN_004a73e0(&local_8);
  local_10 = FUN_004a74c0(&local_4);
  iVar3 = 1;
  local_1c = FUN_00526410();
  FUN_00526420(0xf7);
  FUN_00538980(0,0,local_20);
  _DAT_005d0158 = DAT_00585970;
  DAT_005d0160 = DAT_00585968;
  _DAT_005d0164 = DAT_0058596c;
  puVar4 = &DAT_005d0160;
  puVar5 = &DAT_005d0168;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  _DAT_005d015c = DAT_00585974;
  FUN_00538860(0,&DAT_005d0158);
  FUN_005387f0(0);
  iVar2 = 7;
LAB_004a71c3:
  do {
    while( true ) {
      do {
        FUN_004a7590(iVar3,&local_18);
        FUN_00538b30();
        iVar1 = FUN_00526620(&local_24);
      } while (iVar1 != 0);
      if (0x7542 < local_24) break;
      if (local_24 == 0x7542) {
        if (7 < iVar2) {
          iVar3 = iVar3 + -1;
          iVar2 = iVar2 + -1;
        }
      }
      else if (local_24 == 1) {
        iVar1 = FUN_004a79d0();
        if (iVar1 == -1) {
LAB_004a7234:
          FUN_00538810();
          FUN_005389c0(0,0,local_20);
          FUN_00526440();
          FUN_00526420(local_1c);
          FUN_004a7580(local_10);
          FUN_004a7580(local_14);
          FUN_004a7580(local_18);
          return iVar1;
        }
      }
      else if (local_24 == 0x7532) {
        iVar1 = -2;
        goto LAB_004a7234;
      }
    }
    if (local_24 != 0x7547) {
      if (local_24 == 0x754d) {
        iVar1 = -1;
        goto LAB_004a7234;
      }
      goto LAB_004a71c3;
    }
    if (iVar2 <= local_8 + local_c + 0xb + local_4) {
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 1;
    }
  } while( true );
}

