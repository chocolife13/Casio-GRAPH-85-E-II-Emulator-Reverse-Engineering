// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005747fc
// entry: 005747fc  size: 117


void FUN_005747fc(void)

{
  undefined4 *puVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_0059afb4;
  puVar1 = (undefined4 *)extraout_ECX[0x411];
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  if ((int *)extraout_ECX[0x41b] != (int *)0x0) {
    (**(code **)(*(int *)extraout_ECX[0x41b] + 0xc))(extraout_ECX + 0x412);
    if ((int *)extraout_ECX[0x41b] != (int *)0x0) {
      (**(code **)(*(int *)extraout_ECX[0x41b] + 4))(1);
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0057631d();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

