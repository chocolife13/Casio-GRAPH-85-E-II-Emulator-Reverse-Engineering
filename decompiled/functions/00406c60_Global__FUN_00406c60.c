// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00406c60
// entry: 00406c60  size: 276


undefined4 FUN_00406c60(undefined4 param_1,undefined4 param_2,undefined **param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 *in_stack_00000084;
  undefined4 in_stack_00000088;
  code *in_stack_000034d0;
  
  FUN_00553a90();
  FUN_005603ea();
  in_stack_00000084 = &stack0x00000204;
  param_3 = &PTR_LAB_0057cc1c;
  in_stack_00000088 = 13000;
  iVar2 = FUN_0056054c();
  puVar1 = in_stack_00000084;
  if ((iVar2 == 1) && (iVar2 = 0, in_stack_00000084 != (undefined1 *)0x0)) {
    do {
      FUN_00560737();
      FUN_005676c7();
      iVar3 = (*in_stack_000034d0)();
      if (iVar3 < 0) {
        FUN_00567398();
        goto LAB_00406d54;
      }
      iVar2 = iVar2 + iVar3;
      FUN_00567398();
    } while (puVar1 != (undefined1 *)0x0);
    if (iVar2 != 0) {
      FUN_00567398();
      CDialog::~CDialog((CDialog *)&param_3);
      return 1;
    }
  }
LAB_00406d54:
  FUN_00567398();
  CDialog::~CDialog((CDialog *)&param_3);
  return 0;
}

