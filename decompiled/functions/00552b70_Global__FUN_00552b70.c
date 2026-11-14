// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00552b70
// entry: 00552b70  size: 20


undefined4 FUN_00552b70(void)

{
  CWinThread *pCVar1;
  undefined4 uVar2;
  
  pCVar1 = AfxGetThread();
  if (pCVar1 != (CWinThread *)0x0) {
    uVar2 = (**(code **)(*(int *)pCVar1 + 0x74))();
    return uVar2;
  }
  return 0;
}

