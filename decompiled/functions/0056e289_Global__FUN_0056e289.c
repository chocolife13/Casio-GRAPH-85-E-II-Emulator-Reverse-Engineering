// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056e289
// entry: 0056e289  size: 133


void FUN_0056e289(void)

{
  int iVar1;
  CWnd *this;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(CWnd **)(unaff_EBP + -0x10) = this;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0056ea1f();
  if (*(int *)(this + 0x6c) != 0) {
    FUN_00572428(this);
  }
  iVar1 = *(int *)(this + 0x74);
  *(undefined4 *)(this + 0x74) = 0;
  if (iVar1 != 0) {
    FUN_00570180();
    FUN_00566960(iVar1);
  }
  if (*(int *)(this + 0x5c) != 0) {
    FUN_00553b50(*(int *)(this + 0x5c));
  }
  iVar1 = FUN_00574748();
  if (*(CWnd **)(iVar1 + 0x108) == this) {
    *(undefined4 *)(iVar1 + 0x108) = 0;
    *(undefined4 *)(iVar1 + 0x104) = 0xffffffff;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  CWnd::~CWnd(this);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

