// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b7750
// entry: 004b7750  size: 40


undefined1 * FUN_004b7750(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_004b7550(param_2);
  puVar2 = param_1;
  for (iVar1 = iVar1 + 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  return param_1;
}

