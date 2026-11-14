// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00575320
// entry: 00575320  size: 124


void FUN_00575320(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  if (*(int *)(unaff_EBP + 8) != 0) {
    iVar1 = FUN_00566937(0x20);
    *(int *)(unaff_EBP + -0x10) = iVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar1 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_005682fe(0,"Recent File List","File%d",*(undefined4 *)(unaff_EBP + 8),0x1e
                                  );
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(int **)(extraout_ECX + 0xa8) = piVar2;
    (**(code **)(*piVar2 + 0xc))();
  }
  uVar3 = FUN_00575035("Settings","PreviewPages",0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined4 *)(extraout_ECX + 0xb4) = uVar3;
  return;
}

