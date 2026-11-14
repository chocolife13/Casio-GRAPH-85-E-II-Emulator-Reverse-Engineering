// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0040ade0
// entry: 0040ade0  size: 67


void FUN_0040ade0(void)

{
  int iVar1;
  CWinThread *pCVar2;
  
  iVar1 = FUN_0057497f();
  if (*(int *)(*(int *)(iVar1 + 4) + 0x1c) != 0) {
    pCVar2 = AfxGetThread();
    if (pCVar2 != (CWinThread *)0x0) {
      (**(code **)(*(int *)pCVar2 + 0x74))();
    }
    FUN_005729b9();
    FUN_0040d280();
    FUN_0040d300(1,0xffffffff,0xffffffff);
  }
  return;
}

