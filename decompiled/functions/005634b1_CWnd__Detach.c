// decompiled from GRAPH85emulator.exe
// function: CWnd::Detach
// entry: 005634b1  size: 46


/* Library Function - Single Match
    public: struct HWND__ * __thiscall CWnd::Detach(void)
   
   Library: Visual Studio 2008 Release */

HWND__ * __thiscall CWnd::Detach(CWnd *this)

{
  HWND__ *pHVar1;
  int iVar2;
  
  pHVar1 = *(HWND__ **)(this + 0x1c);
  if (pHVar1 != (HWND__ *)0x0) {
    iVar2 = FUN_005633c1(0);
    if (iVar2 != 0) {
      FUN_00562258(*(undefined4 *)(this + 0x1c));
    }
    *(undefined4 *)(this + 0x1c) = 0;
  }
  *(undefined4 *)(this + 0x38) = 0;
  return pHVar1;
}

