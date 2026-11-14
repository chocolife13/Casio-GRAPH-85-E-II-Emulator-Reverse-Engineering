// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00562c2a
// entry: 00562c2a  size: 77


undefined4 FUN_00562c2a(void)

{
  HWND pHVar1;
  int unaff_EBP;
  CDialog *unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x20) != unaff_EDI) {
    EnableWindow(*(HWND *)(unaff_EBP + -0x14),1);
  }
  if (*(int *)(unaff_EBP + -0x14) != unaff_EDI) {
    pHVar1 = GetActiveWindow();
    if (pHVar1 == *(HWND *)(unaff_ESI + 0x1c)) {
      SetActiveWindow(*(HWND *)(unaff_EBP + -0x14));
    }
  }
  (**(code **)(*(int *)unaff_ESI + 0x58))();
  CDialog::PostModal(unaff_ESI);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_ESI + 0x2c);
}

