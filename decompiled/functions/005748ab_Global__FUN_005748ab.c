// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005748ab
// entry: 005748ab  size: 174


void FUN_005748ab(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *extraout_ECX;
  int iVar3;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_0059afbc;
  puVar1 = (undefined4 *)extraout_ECX[5];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  if ((undefined4 *)extraout_ECX[6] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)extraout_ECX[6])(1);
  }
  if ((undefined4 *)extraout_ECX[7] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)extraout_ECX[7])(1);
  }
  if ((undefined4 *)extraout_ECX[8] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)extraout_ECX[8])(1);
  }
  if ((undefined4 *)extraout_ECX[9] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)extraout_ECX[9])(1);
  }
  iVar3 = extraout_ECX[0xe];
  if (iVar3 != 0) {
    while (*(int *)(iVar3 + 0xc) != 0) {
      uVar2 = FUN_00561de9();
      FUN_00566960(uVar2);
      iVar3 = extraout_ECX[0xe];
    }
  }
  if ((int *)extraout_ECX[0xc] != (int *)0x0) {
    (**(code **)(*(int *)extraout_ECX[0xc] + 4))(1);
  }
  if ((int *)extraout_ECX[0xd] != (int *)0x0) {
    (**(code **)(*(int *)extraout_ECX[0xd] + 4))(1);
  }
  if ((int *)extraout_ECX[0xe] != (int *)0x0) {
    (**(code **)(*(int *)extraout_ECX[0xe] + 4))(1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

