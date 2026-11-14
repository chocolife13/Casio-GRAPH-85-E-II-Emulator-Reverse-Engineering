// decompiled from GRAPH85emulator.exe
// function: CDialog::~CDialog
// entry: 00562709  size: 62


/* Library Function - Single Match
    public: virtual __thiscall CDialog::~CDialog(void)
   
   Library: Visual Studio 2003 Release */

void __thiscall CDialog::~CDialog(CDialog *this)

{
  CWnd *this_00;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(CWnd **)(unaff_EBP + -0x10) = this_00;
  *(undefined ***)this_00 = &PTR_LAB_0059a304;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(this_00 + 0x1c) != 0) {
    FUN_00563c62();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  CWnd::~CWnd(this_00);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

