// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056ea6b
// entry: 0056ea6b  size: 82


void FUN_0056ea6b(void)

{
  int iVar1;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  FUN_0056a5a5(extraout_ECX);
  iVar1 = *extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar1 = (**(code **)(iVar1 + 200))();
  if (iVar1 != 0) {
    (**(code **)(*extraout_ECX + 0xd8))(unaff_EBP + -0x60);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  CPaintDC::~CPaintDC((CPaintDC *)(unaff_EBP + -0x60));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

