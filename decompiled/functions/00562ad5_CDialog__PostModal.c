// decompiled from GRAPH85emulator.exe
// function: CDialog::PostModal
// entry: 00562ad5  size: 66


/* Library Function - Single Match
    protected: void __thiscall CDialog::PostModal(void)
   
   Library: Visual Studio 2008 Release */

void __thiscall CDialog::PostModal(CDialog *this)

{
  BOOL BVar1;
  int iVar2;
  
  FUN_00563931();
  CWnd::Detach((CWnd *)this);
  BVar1 = IsWindow(*(HWND *)(this + 0x54));
  if (BVar1 != 0) {
    EnableWindow(*(HWND *)(this + 0x54),1);
  }
  *(undefined4 *)(this + 0x54) = 0;
  iVar2 = FUN_0057497f();
  if (*(int *)(iVar2 + 4) != 0) {
    FUN_0056dfbb(1);
  }
  return;
}

