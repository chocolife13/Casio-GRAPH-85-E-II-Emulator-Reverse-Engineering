// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004422e0
// entry: 004422e0  size: 38


undefined4 FUN_004422e0(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  do {
    iVar1 = FUN_005182c0(iVar2,0);
    if (iVar1 != 0) {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return 1;
}

