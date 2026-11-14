// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a8ec0
// entry: 004a8ec0  size: 156


void FUN_004a8ec0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint local_34;
  undefined4 local_30 [12];
  
  puVar2 = &DAT_00585cc0;
  puVar3 = local_30;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00538860(0xb,local_30);
  FUN_005387f0(0xb);
  do {
    while( true ) {
      FUN_004a8d30(&DAT_00585ca0);
      FUN_00538b30();
      iVar1 = FUN_00526620(&local_34);
      while (iVar1 != 0) {
        iVar1 = FUN_00526620(&local_34);
      }
      if (local_34 < 0x7533) break;
      if (local_34 == 0x754d) {
LAB_004a8f53:
        FUN_00538810();
        return;
      }
    }
    if (local_34 == 0x7532) goto LAB_004a8f53;
    if (local_34 == 1) {
      DAT_005d6504 = 0;
      goto LAB_004a8f53;
    }
    if (local_34 == 2) {
      DAT_005d6504 = 1;
      FUN_00538810();
      return;
    }
  } while( true );
}

