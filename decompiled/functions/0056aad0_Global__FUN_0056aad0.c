// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056aad0
// entry: 0056aad0  size: 91


void __fastcall FUN_0056aad0(int param_1)

{
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x10) = param_1;
  *(undefined4 *)(unaff_EBP + -4) = 3;
  FUN_0056ab30();
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x24) + 0x60))(param_1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00561d26();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00567398();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00567398();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00566423();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

