// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00566b6d
// entry: 00566b6d  size: 95


void FUN_00566b6d(void)

{
  int iVar1;
  DWORD dwThreadId;
  HHOOK pHVar2;
  int iVar3;
  
  iVar1 = FUN_0057497f();
  if (*(char *)(iVar1 + 0x14) == '\0') {
    iVar1 = FUN_00574748();
    dwThreadId = GetCurrentThreadId();
    pHVar2 = SetWindowsHookExA(-1,(HOOKPROC)&LAB_00566ec5,(HINSTANCE)0x0,dwThreadId);
    *(HHOOK *)(iVar1 + 0x30) = pHVar2;
    iVar1 = FUN_0057633b(&LAB_0057437f);
    if (*(int *)(iVar1 + 0x14) != 0) {
      iVar3 = FUN_0057497f();
      (**(code **)(iVar1 + 0x14))(*(undefined4 *)(iVar3 + 8));
    }
    FUN_005762a6(&LAB_0057585b);
  }
  return;
}

