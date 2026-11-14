// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0054c990
// entry: 0054c990  size: 101


void FUN_0054c990(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    puVar4 = (undefined4 *)((int)&DAT_00599c68 + iVar2);
    puVar5 = (undefined4 *)((int)&DAT_005d2a60 + iVar2);
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    FUN_00538860(iVar3,(undefined4 *)((int)&DAT_005d2a60 + iVar2));
    iVar2 = iVar2 + 0x30;
    iVar3 = iVar3 + 1;
  } while (iVar2 < 0x2a0);
  FUN_005383a0(0);
  FUN_0053c6f0(1);
  FUN_0053edf0(2);
  FUN_0053c690(2);
  FUN_00538e10(0);
  FUN_00538d50(0);
  return;
}

