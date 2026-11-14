// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056aa0a
// entry: 0056aa0a  size: 97


void FUN_0056aa0a(void)

{
  int iVar1;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined **)(unaff_EBP + -0x10) = PTR_DAT_005cba44;
  iVar1 = *extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar1 = (**(code **)(iVar1 + 100))(unaff_EBP + -0x10,1,extraout_ECX);
  if ((iVar1 == 0) || (*(int *)(*(int *)(unaff_EBP + -0x10) + -8) == 0)) {
    FUN_005677ee(0xf003);
  }
  (**(code **)(**(int **)(unaff_EBP + 8) + 0x50))(*(undefined4 *)(unaff_EBP + -0x10));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00567398();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

