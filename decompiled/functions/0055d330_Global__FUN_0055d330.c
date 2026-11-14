// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055d330
// entry: 0055d330  size: 263


undefined4 FUN_0055d330(HWND param_1)

{
  code *pcVar1;
  LONG LVar2;
  HANDLE pvVar3;
  HWND hWnd;
  int iVar4;
  
  if (DAT_005da960 != 0) {
    pcVar1 = (code *)GetWindowLongA(param_1,-4);
    iVar4 = 0;
    do {
      if ((code *)(&DAT_005db3c0)[iVar4 * 6] == pcVar1) {
        LVar2 = FUN_0055ca00(param_1,iVar4);
        RemovePropA(param_1,(LPCSTR)(uint)DAT_005da96e);
        SetWindowLongA(param_1,-4,LVar2);
        pcVar1 = (code *)0x0;
        iVar4 = 0x10;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 6);
    if (iVar4 == 6) {
      if (pcVar1 == FUN_0055dee0) {
        LVar2 = FUN_0055ca00(param_1,6);
        RemovePropA(param_1,(LPCSTR)(uint)DAT_005da96e);
        SetWindowLongA(param_1,-4,LVar2);
      }
      else {
        pvVar3 = GetPropA(param_1,(LPCSTR)(uint)DAT_005da96e);
        if (((pvVar3 != (HANDLE)0x0) ||
            (pvVar3 = GetPropA(param_1,(LPCSTR)(uint)DAT_005da972), pvVar3 != (HANDLE)0x0)) ||
           (pvVar3 = GetPropA(param_1,(LPCSTR)(uint)DAT_005da970), pvVar3 != (HANDLE)0x0)) {
          SetPropA(param_1,(LPCSTR)(uint)DAT_005da974,(HANDLE)0x1);
        }
      }
    }
    for (hWnd = GetWindow(param_1,5); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
      FUN_0055d330(hWnd);
    }
    return 1;
  }
  return 0;
}

