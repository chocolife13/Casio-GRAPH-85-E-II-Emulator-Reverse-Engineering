// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056bd34
// entry: 0056bd34  size: 84


void FUN_0056bd34(void)

{
  int iVar1;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  FUN_0056a5a5(extraout_ECX);
  iVar1 = *extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  (**(code **)(iVar1 + 0xdc))(unaff_EBP + -0x60,0);
  (**(code **)(*extraout_ECX + 0xf0))(unaff_EBP + -0x60);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  CPaintDC::~CPaintDC((CPaintDC *)(unaff_EBP + -0x60));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

