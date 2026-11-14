// decompiled from GRAPH85emulator.exe
// function: CDialog::PreModal
// entry: 00562a9b  size: 58


/* Library Function - Single Match
    protected: struct HWND__ * __thiscall CDialog::PreModal(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

HWND__ * __thiscall CDialog::PreModal(CDialog *this)

{
  int iVar1;
  HWND__ *pHVar2;
  
  iVar1 = FUN_0057497f();
  if (*(int *)(iVar1 + 4) != 0) {
    FUN_0056dfbb(0);
  }
  iVar1 = *(int *)(this + 0x50);
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x1c);
  }
  pHVar2 = (HWND__ *)FUN_0056e161(iVar1,this + 0x54);
  FUN_005638e5(this);
  return pHVar2;
}

