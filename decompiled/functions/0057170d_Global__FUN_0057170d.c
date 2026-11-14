// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0057170d
// entry: 0057170d  size: 194


undefined4 * FUN_0057170d(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_00563012();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00561cc7(10);
  extraout_ECX[0x2b] = PTR_DAT_005cba44;
  extraout_ECX[0x10] = 0xffffffff;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *extraout_ECX = &PTR_LAB_0059b4bc;
  extraout_ECX[0xf] = 1;
  extraout_ECX[0x27] = 0;
  extraout_ECX[0x11] = 0;
  extraout_ECX[0x12] = 0;
  extraout_ECX[0x23] = 0;
  extraout_ECX[0x24] = 0;
  extraout_ECX[0x25] = 0;
  extraout_ECX[0x26] = 0;
  extraout_ECX[0x28] = 0;
  extraout_ECX[0x29] = 0;
  extraout_ECX[0x1a] = 0;
  extraout_ECX[0x2a] = 0;
  extraout_ECX[0x2e] = 0;
  SetRectEmpty((LPRECT)(extraout_ECX + 0x16));
  extraout_ECX[0x22] = 0xffffffff;
  extraout_ECX[0x14] = 0;
  extraout_ECX[0x13] = 0;
  extraout_ECX[0x15] = 0;
  extraout_ECX[0x2c] = 0;
  extraout_ECX[0x2d] = 0;
  FUN_00571852();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}

