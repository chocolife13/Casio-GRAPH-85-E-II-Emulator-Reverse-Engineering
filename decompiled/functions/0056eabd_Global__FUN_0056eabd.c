// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056eabd
// entry: 0056eabd  size: 205


void FUN_0056eabd(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  FUN_0056a4f1(extraout_ECX);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  GetClientRect(*(HWND *)(extraout_ECX + 0x1c),(LPRECT)(unaff_EBP + -0x2c));
  GetWindowRect(*(HWND *)(extraout_ECX + 0x1c),(LPRECT)(unaff_EBP + -0x1c));
  FUN_0056a3c5(unaff_EBP + -0x1c);
  OffsetRect((LPRECT)(unaff_EBP + -0x2c),-*(int *)(unaff_EBP + -0x1c),-*(int *)(unaff_EBP + -0x18));
  FUN_0056a20f(unaff_EBP + -0x2c);
  OffsetRect((LPRECT)(unaff_EBP + -0x1c),-*(int *)(unaff_EBP + -0x1c),-*(int *)(unaff_EBP + -0x18));
  FUN_0056ef3a(unaff_EBP + -0x40,unaff_EBP + -0x1c);
  FUN_0056a251(unaff_EBP + -0x1c);
  SendMessageA(*(HWND *)(extraout_ECX + 0x1c),0x14,*(WPARAM *)(unaff_EBP + -0x3c),0);
  FUN_0056f0e8(unaff_EBP + -0x40,unaff_EBP + -0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FID_conflict__CClientDC();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

