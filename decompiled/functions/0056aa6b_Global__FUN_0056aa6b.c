// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056aa6b
// entry: 0056aa6b  size: 90


int FUN_0056aa6b(void)

{
  undefined *puVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_00566409();
  puVar1 = PTR_DAT_005cba44;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined **)(extraout_ECX + 0x1c) = puVar1;
  *(undefined **)(extraout_ECX + 0x20) = PTR_DAT_005cba44;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00561cc7(10);
  *(undefined4 *)(extraout_ECX + 0x24) = 0;
  *(undefined4 *)(extraout_ECX + 0x44) = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined4 *)(extraout_ECX + 0x4c) = 0;
  *(undefined4 *)(extraout_ECX + 0x48) = 1;
  return extraout_ECX;
}

