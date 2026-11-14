// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005638e5
// entry: 005638e5  size: 76


void FUN_005638e5(int param_1)

{
  int iVar1;
  DWORD dwThreadId;
  HHOOK pHVar2;
  
  iVar1 = FUN_005762a6(&LAB_0057431a);
  if (*(int *)(iVar1 + 0x14) != param_1) {
    if (*(int *)(iVar1 + 0x2c) == 0) {
      dwThreadId = GetCurrentThreadId();
      pHVar2 = SetWindowsHookExA(5,FUN_005636ef,(HINSTANCE)0x0,dwThreadId);
      *(HHOOK *)(iVar1 + 0x2c) = pHVar2;
      if (pHVar2 == (HHOOK)0x0) {
        FUN_005611ec();
      }
    }
    *(int *)(iVar1 + 0x14) = param_1;
  }
  return;
}

