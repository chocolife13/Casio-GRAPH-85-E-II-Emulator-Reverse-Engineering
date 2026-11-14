// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043c940
// entry: 0043c940  size: 148


void FUN_0043c940(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  FUN_00538d10();
  iVar4 = 0;
  iVar3 = 0;
  do {
    puVar5 = (undefined4 *)((int)&DAT_0057f170 + iVar3);
    puVar6 = (undefined4 *)((int)&DAT_005ce120 + iVar3);
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    FUN_00538860(iVar4,(undefined4 *)((int)&DAT_005ce120 + iVar3));
    iVar3 = iVar3 + 0x30;
    iVar4 = iVar4 + 1;
  } while (iVar3 < 0x150);
  FUN_00538d50(1);
  FUN_0053c6f0(3);
  FUN_0053edf0(1);
  FUN_0053c690(1);
  cVar1 = FUN_00526090(0x17);
  if (cVar1 == '\0') {
    FUN_005383a0(1);
    FUN_00538e10(1);
    return;
  }
  FUN_005383a0(2);
  FUN_00538e10(3);
  FUN_00526420(0xb3);
  return;
}

