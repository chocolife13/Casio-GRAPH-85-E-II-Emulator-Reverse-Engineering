// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00525b70
// entry: 00525b70  size: 69


void FUN_00525b70(int param_1)

{
  int iVar1;
  
  FUN_005237c0(5);
  iVar1 = *(int *)(&DAT_00597fb0 + param_1 * 4);
  if (iVar1 < *(int *)(&DAT_00597fcc + param_1 * 4)) {
    do {
      FUN_00525b50(iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(&DAT_00597fcc + param_1 * 4));
  }
  FUN_00414650(0,param_1);
  return;
}

