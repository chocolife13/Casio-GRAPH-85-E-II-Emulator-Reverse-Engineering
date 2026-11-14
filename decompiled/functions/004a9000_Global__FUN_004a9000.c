// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a9000
// entry: 004a9000  size: 203


void FUN_004a9000(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint local_34;
  undefined4 local_30 [12];
  
  puVar2 = &DAT_00585d60;
  puVar3 = local_30;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00538860(0xb,local_30);
  FUN_005387f0(0xb);
  while( true ) {
    while( true ) {
      FUN_004a8d30(&DAT_00585d40);
      FUN_00538b30();
      iVar1 = FUN_00526620(&local_34);
      while (iVar1 != 0) {
        iVar1 = FUN_00526620(&local_34);
      }
      if (local_34 < 4) break;
      if ((local_34 == 0x7532) || (local_34 == 0x754d)) goto LAB_004a90c2;
    }
    if (local_34 == 3) break;
    if (local_34 == 1) {
      if (DAT_005d67d8 == '\0') {
        FUN_00414db0();
      }
      DAT_005d67d8 = 1;
      FUN_00538810();
      return;
    }
    if (local_34 == 2) {
      if (DAT_005d67d8 == '\0') {
        FUN_00414db0();
      }
      DAT_005d67d8 = 2;
      FUN_00538810();
      return;
    }
  }
  DAT_005d67d8 = '\0';
LAB_004a90c2:
  FUN_00538810();
  return;
}

