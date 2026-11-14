// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005615a2
// entry: 005615a2  size: 71


void FUN_005615a2(void)

{
  CWnd *this;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(CWnd **)(unaff_EBP + -0x10) = this;
  *(undefined ***)this = &PTR_LAB_0059d14c;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00563c62();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_005623e6();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  CWnd::~CWnd(this);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

