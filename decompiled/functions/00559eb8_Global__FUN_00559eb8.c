// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00559eb8
// entry: 00559eb8  size: 95


void FUN_00559eb8(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_005d95a0)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_00558590(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_005585f1(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_005d95a0)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}

