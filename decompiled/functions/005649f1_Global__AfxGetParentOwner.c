// decompiled from GRAPH85emulator.exe
// function: Global::AfxGetParentOwner
// entry: 005649f1  size: 69


/* Library Function - Single Match
    struct HWND__ * __stdcall AfxGetParentOwner(struct HWND__ *)
   
   Library: Visual Studio 2003 Release */

HWND__ * AfxGetParentOwner(HWND__ *param_1)

{
  CWnd *pCVar1;
  uint uVar2;
  
  pCVar1 = (CWnd *)FUN_0056345a(param_1);
  if (pCVar1 == (CWnd *)0x0) {
    uVar2 = GetWindowLongA(param_1,-0x10);
    if ((uVar2 & 0x40000000) == 0) {
      pCVar1 = (CWnd *)GetWindow(param_1,4);
    }
    else {
      pCVar1 = (CWnd *)GetParent(param_1);
    }
  }
  else {
    pCVar1 = CWnd::GetOwner(pCVar1);
    if (pCVar1 != (CWnd *)0x0) {
      pCVar1 = *(CWnd **)(pCVar1 + 0x1c);
    }
  }
  return (HWND__ *)pCVar1;
}

