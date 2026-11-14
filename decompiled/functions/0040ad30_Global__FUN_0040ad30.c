// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0040ad30
// entry: 0040ad30  size: 50


void FUN_0040ad30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  CWinThread *pCVar1;
  
  pCVar1 = AfxGetThread();
  if (pCVar1 != (CWinThread *)0x0) {
    (**(code **)(*(int *)pCVar1 + 0x74))();
  }
  FUN_005729b9();
  FUN_0040d300(param_1,param_2,param_3);
  return;
}

