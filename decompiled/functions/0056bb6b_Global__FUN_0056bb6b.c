// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056bb6b
// entry: 0056bb6b  size: 58


void FUN_0056bb6b(void)

{
  int iVar1;
  CWnd *this;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(CWnd **)(unaff_EBP + -0x10) = this;
  iVar1 = *(int *)(this + 0x3c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    FUN_0056bad1(this);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  CWnd::~CWnd(this);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

