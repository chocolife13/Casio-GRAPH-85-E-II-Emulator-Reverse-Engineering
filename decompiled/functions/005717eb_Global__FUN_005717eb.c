// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005717eb
// entry: 005717eb  size: 103


void FUN_005717eb(void)

{
  CWnd *this;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(CWnd **)(unaff_EBP + -0x10) = this;
  *(undefined ***)this = &PTR_LAB_0059b4bc;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_00571876();
  if (*(int *)(this + 0xa4) != 0) {
    FUN_00566960(*(int *)(this + 0xa4));
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00567398();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00561d26();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  CWnd::~CWnd(this);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

