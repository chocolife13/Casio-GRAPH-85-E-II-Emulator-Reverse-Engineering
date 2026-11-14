// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056fd81
// entry: 0056fd81  size: 92


void FUN_0056fd81(void)

{
  int iVar1;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined **)(unaff_EBP + -0x10) = PTR_DAT_005cba44;
  iVar1 = *extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar1 = (**(code **)(iVar1 + 0x2c))(unaff_EBP + -0x10,0xf000,0x1004,1,0,extraout_ECX);
  if (iVar1 != 0) {
    iVar1 = FUN_0057497f();
    (**(code **)(**(int **)(iVar1 + 4) + 0x7c))(*(undefined4 *)(unaff_EBP + -0x10));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00567398();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

