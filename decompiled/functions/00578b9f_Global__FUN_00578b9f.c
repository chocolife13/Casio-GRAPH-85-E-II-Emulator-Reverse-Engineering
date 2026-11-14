// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00578b9f
// entry: 00578b9f  size: 82


bool FUN_00578b9f(void)

{
  int iVar1;
  BOOL BVar2;
  CWinThread *pCVar3;
  int iVar4;
  tagMSG local_1c;
  
  iVar1 = FUN_0057633b(FUN_0057434e);
  while ((*(int *)(iVar1 + 0xc) == 0 &&
         (BVar2 = PeekMessageA(&local_1c,(HWND)0x0,0,0,0), BVar2 != 0))) {
    pCVar3 = AfxGetThread();
    iVar4 = (**(code **)(*(int *)pCVar3 + 0x5c))();
    if (iVar4 == 0) {
      return false;
    }
  }
  return *(int *)(iVar1 + 0xc) == 0;
}

