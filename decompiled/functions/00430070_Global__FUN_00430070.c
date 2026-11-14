// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00430070
// entry: 00430070  size: 37


void FUN_00430070(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 < 0) {
    puVar2 = &DAT_005d6e00;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    return;
  }
  (&DAT_005d6e00)[param_1] = param_2;
  return;
}

