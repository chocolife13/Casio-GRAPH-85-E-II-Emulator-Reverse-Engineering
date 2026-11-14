// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055833a
// entry: 0055833a  size: 160


void FUN_0055833a(LPVOID param_1)

{
  if (DAT_005cc3d0 != 0xffffffff) {
    if ((param_1 != (LPVOID)0x0) || (param_1 = TlsGetValue(DAT_005cc3d0), param_1 != (LPVOID)0x0)) {
      if (*(int *)((int)param_1 + 0x24) != 0) {
        FUN_00553b50(*(int *)((int)param_1 + 0x24));
      }
      if (*(int *)((int)param_1 + 0x28) != 0) {
        FUN_00553b50(*(int *)((int)param_1 + 0x28));
      }
      if (*(int *)((int)param_1 + 0x30) != 0) {
        FUN_00553b50(*(int *)((int)param_1 + 0x30));
      }
      if (*(int *)((int)param_1 + 0x38) != 0) {
        FUN_00553b50(*(int *)((int)param_1 + 0x38));
      }
      if (*(int *)((int)param_1 + 0x40) != 0) {
        FUN_00553b50(*(int *)((int)param_1 + 0x40));
      }
      if (*(int *)((int)param_1 + 0x44) != 0) {
        FUN_00553b50(*(int *)((int)param_1 + 0x44));
      }
      if (*(undefined **)((int)param_1 + 0x50) != &DAT_005cc6f0) {
        FUN_00553b50(*(undefined **)((int)param_1 + 0x50));
      }
      FUN_00553b50(param_1);
    }
    TlsSetValue(DAT_005cc3d0,(LPVOID)0x0);
    return;
  }
  return;
}

