// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056fcb5
// entry: 0056fcb5  size: 165


void FUN_0056fcb5(void)

{
  int iVar1;
  int extraout_ECX;
  int *piVar2;
  int unaff_EBP;
  
  FUN_00555ab8();
  if (*(int *)(extraout_ECX + 0x10) == 0) {
    FUN_0056e108(0xf104,0,0xffffffff);
  }
  else {
    piVar2 = *(int **)(*(int *)(extraout_ECX + 8) + 8);
    if (1 < *(int *)(extraout_ECX + 0x10)) {
      FUN_00562a62(0x7801,0);
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      *(undefined ***)(unaff_EBP + -0x70) = &PTR_LAB_0059ca4c;
      *(int *)(unaff_EBP + -0x14) = extraout_ECX + 4;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iVar1 = FUN_00562b17();
      if (iVar1 != 1) {
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        *(undefined ***)(unaff_EBP + -0x70) = &PTR_LAB_0059ca4c;
        CDialog::~CDialog((CDialog *)(unaff_EBP + -0x70));
        goto LAB_0056fd3a;
      }
      piVar2 = *(int **)(unaff_EBP + -0x10);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(undefined ***)(unaff_EBP + -0x70) = &PTR_LAB_0059ca4c;
      CDialog::~CDialog((CDialog *)(unaff_EBP + -0x70));
    }
    (**(code **)(*piVar2 + 0x80))(0,1);
  }
LAB_0056fd3a:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

