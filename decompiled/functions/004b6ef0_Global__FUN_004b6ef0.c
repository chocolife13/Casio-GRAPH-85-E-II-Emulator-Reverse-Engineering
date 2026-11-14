// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b6ef0
// entry: 004b6ef0  size: 53


undefined1 * FUN_004b6ef0(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (param_2 != (undefined1 *)0x0) {
    iVar1 = FUN_004b6ca0(param_2);
    puVar2 = param_1;
    for (iVar1 = iVar1 + 1; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_2;
      puVar2 = puVar2 + 1;
      param_2 = param_2 + 1;
    }
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}

