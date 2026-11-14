// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004aaaa0
// entry: 004aaaa0  size: 250


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_004aaaa0(void)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  undefined1 auStack_4 [4];
  
  iVar1 = 2;
  bVar6 = true;
  piVar4 = &DAT_005d67e0;
  piVar5 = (int *)s_CASIOWIN_005c062c;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar6 = *piVar4 == *piVar5;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    FUN_004aaf90(0);
    FUN_004aaf90(1);
  }
  else {
    FUN_00412190();
    FUN_004aaba0();
    FUN_004aabb0();
    FUN_004ad5a0();
  }
  bVar2 = !bVar6;
  FUN_0041c290();
  iVar1 = FUN_0041c2d0();
  if (iVar1 == -6) {
    FUN_00429ad0(L"fls0",1,0);
    FUN_004aad30(1);
    bVar2 = bVar2 | 4;
  }
  else {
    iVar1 = FUN_004aefb0();
    if (iVar1 == 1) {
      thunk_FUN_004aecb0(0);
      bVar2 = 0;
      DAT_005d67e0 = 0;
      _DAT_005d67e4 = 0;
    }
  }
  iVar1 = 2;
  bVar6 = true;
  piVar4 = &DAT_005d67e0;
  piVar5 = (int *)s_CASIOWIN_005c062c;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar6 = *piVar4 == *piVar5;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (bVar6);
  bVar3 = bVar2;
  if (!bVar6) goto LAB_004aab6b;
  while (iVar1 = FUN_004118c0(auStack_4), bVar3 = bVar2, iVar1 != 0) {
    do {
      FUN_004ad5a0();
      bVar3 = bVar2 | 2;
      if ((bVar2 & 1) != 0) goto LAB_004aab84;
LAB_004aab6b:
      FUN_00412190();
      FUN_004aaba0();
      FUN_004aabb0();
      bVar2 = bVar3 | 1;
    } while ((bVar3 & 2) == 0);
  }
LAB_004aab84:
  if ((bVar3 & 3) != 0) {
    FUN_004aad30(2);
  }
  return bVar3;
}

