// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005531e7
// entry: 005531e7  size: 121


int * FUN_005531e7(void)

{
  int iVar1;
  int *piVar2;
  int *extraout_ECX;
  int iVar3;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffe8;
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  EnterCriticalSection((LPCRITICAL_SECTION)(extraout_ECX + 4));
  if (extraout_ECX[3] == 0) {
    iVar3 = *extraout_ECX;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar1 = FUN_00561e67(extraout_ECX + 2,extraout_ECX[1],iVar3);
    iVar3 = extraout_ECX[1];
    piVar2 = (int *)((iVar3 + -1) * *extraout_ECX + 4 + iVar1);
    if (-1 < iVar3 + -1) {
      do {
        *piVar2 = extraout_ECX[3];
        extraout_ECX[3] = (int)piVar2;
        piVar2 = (int *)((int)piVar2 - *extraout_ECX);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  piVar2 = (int *)extraout_ECX[3];
  extraout_ECX[3] = *piVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)(extraout_ECX + 4));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return piVar2;
}

