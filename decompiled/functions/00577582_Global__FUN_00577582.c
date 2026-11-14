// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00577582
// entry: 00577582  size: 85


void FUN_00577582(void)

{
  int unaff_EBP;
  
  FUN_00555ab8();
  FUN_0056120b(1,0x14000c,0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_005774cd(unaff_EBP + -0xb0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  CDialog::~CDialog((CDialog *)(unaff_EBP + -0xb0));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

