// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00418c00
// entry: 00418c00  size: 70


void FUN_00418c00(void)

{
  int iVar1;
  
  FUN_00553a90();
  iVar1 = FUN_0041ce50();
  if (iVar1 != 0) {
    FUN_0041edd0();
  }
  iVar1 = (*(code *)PTR_FUN_005bd628)(&stack0x00000000);
  if (-1 < iVar1) {
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    FUN_00418b90(iVar1,&stack0x00000000);
  }
  return;
}

