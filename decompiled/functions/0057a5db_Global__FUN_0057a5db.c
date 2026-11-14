// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0057a5db
// entry: 0057a5db  size: 107


void FUN_0057a5db(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_0059c9e8;
  puVar1 = (undefined4 *)extraout_ECX[2];
  *(undefined4 *)(unaff_EBP + -4) = 1;
  while (puVar3 = puVar1, puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar3;
    piVar2 = (int *)puVar3[2];
    if ((piVar2[7] != 0) && (FUN_00561e0d(puVar3), piVar2 != (int *)0x0)) {
      (**(code **)(*piVar2 + 4))(1);
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00561d26();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

