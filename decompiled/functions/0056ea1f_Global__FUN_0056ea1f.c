// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056ea1f
// entry: 0056ea1f  size: 43


void __fastcall FUN_0056ea1f(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar1 = FUN_005738d6();
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_005738c5();
      (**(code **)(*piVar2 + 0x58))();
      return;
    }
  }
  FUN_00563c62();
  return;
}

