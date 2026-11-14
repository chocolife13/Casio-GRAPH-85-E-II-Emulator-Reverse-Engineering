// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004074f0
// entry: 004074f0  size: 81


void __fastcall FUN_004074f0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *param_1) {
    do {
      iVar1 = *(int *)(*(int *)(param_1[1] + iVar2 * 4) + 8);
      if (iVar1 != 0) {
        FUN_00566960(iVar1);
      }
      FUN_00566960(*(undefined4 *)(param_1[1] + iVar2 * 4));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *param_1);
  }
  if (param_1[1] != 0) {
    FUN_00566960(param_1[1]);
  }
  param_1[1] = 0;
  return;
}

