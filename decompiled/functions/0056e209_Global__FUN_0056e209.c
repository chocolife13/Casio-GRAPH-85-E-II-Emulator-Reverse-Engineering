// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056e209
// entry: 0056e209  size: 92


void FUN_0056e209(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  if (*(int *)(extraout_ECX + 0x80) == 0) {
    iVar1 = FUN_00566937(0x20);
    *(int *)(unaff_EBP + -0x10) = iVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00576976();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(extraout_ECX + 0x80) = uVar2;
  }
  (**(code **)(**(int **)(extraout_ECX + 0x80) + 0xc))(*(undefined4 *)(unaff_EBP + 8));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

