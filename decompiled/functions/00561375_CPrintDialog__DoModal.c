// decompiled from GRAPH85emulator.exe
// function: CPrintDialog::DoModal
// entry: 00561375  size: 46


/* Library Function - Single Match
    public: virtual int __thiscall CPrintDialog::DoModal(void)
   
   Library: Visual Studio 2008 Release */

int __thiscall CPrintDialog::DoModal(CPrintDialog *this)

{
  HWND__ *pHVar1;
  int iVar2;
  
  pHVar1 = CDialog::PreModal((CDialog *)this);
  *(HWND__ **)(*(int *)(this + 0x5c) + 4) = pHVar1;
  iVar2 = PrintDlgA(*(LPPRINTDLGA *)(this + 0x5c));
  CDialog::PostModal((CDialog *)this);
  if (iVar2 == 0) {
    iVar2 = 2;
  }
  return iVar2;
}

