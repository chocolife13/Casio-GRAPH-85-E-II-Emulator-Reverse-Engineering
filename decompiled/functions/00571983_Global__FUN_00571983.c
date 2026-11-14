// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00571983
// entry: 00571983  size: 33


undefined4 __fastcall FUN_00571983(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int **)(param_1 + 0x68) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x68) + 0x70))();
    if (iVar1 != 0) {
      return 1;
    }
  }
  uVar2 = FUN_0056339a();
  return uVar2;
}

