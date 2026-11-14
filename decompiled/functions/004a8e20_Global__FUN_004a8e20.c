// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a8e20
// entry: 004a8e20  size: 156


void FUN_004a8e20(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint local_34;
  undefined4 local_30 [12];
  
  puVar2 = &DAT_00585c70;
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
      FUN_004a8d30(&DAT_00585c50);
      FUN_00538b30();
      iVar1 = FUN_00526620(&local_34);
      while (iVar1 != 0) {
        iVar1 = FUN_00526620(&local_34);
      }
      if (0x7532 < local_34) break;
      if ((local_34 == 0x7532) ||
         ((local_34 < 2 && (iVar1 = FUN_004a90d0(param_1,local_34,param_2), iVar1 != 0x7532))))
      goto LAB_004a8eb1;
    }
  } while (local_34 != 0x754d);
LAB_004a8eb1:
  FUN_00538810();
  return;
}

