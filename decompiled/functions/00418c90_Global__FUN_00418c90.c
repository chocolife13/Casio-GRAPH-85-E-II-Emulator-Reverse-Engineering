// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00418c90
// entry: 00418c90  size: 61


void FUN_00418c90(void)

{
  int iVar1;
  
  FUN_00553a90();
  iVar1 = (*(code *)PTR_FUN_005bd628)(&stack0x00000000);
  if (-1 < iVar1) {
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    FUN_00418b90(iVar1,&stack0x00000000);
  }
  return;
}

